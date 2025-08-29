#define RMS_VALID 1
#define RMS_INVALID 0

int
calc_rms(double X[], double Y[], int n, double *rms) {

        int i;
        double sum, diff;

        if (n <= 0) {
                return RMS_INVALID;
        }

        sum = 0.0;
        for (i = 0; i < n; i++) {
                diff = (X[i] - Y[i]);
                sum += diff * diff;
        }

        *rms = sqrt(sum/n);
        return RMS_VALID;
}