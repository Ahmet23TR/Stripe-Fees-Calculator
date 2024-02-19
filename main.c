#include <stdio.h>

int main() {
    float gross, fees, total;
    float mashreq, stripe_fees, input_vat, ATB_sale, output_vat;

    printf("Gross değerini giriniz: ");
    scanf("%f", &gross);
    printf("\nFees değerini giriniz: ");
    scanf("%f", &fees);
    printf("\nTotal değerini giriniz: ");
    scanf("%f", &total);

    mashreq = total;
    stripe_fees = fees / 1.05;
    input_vat = stripe_fees * 0.05;
    ATB_sale = gross / 1.05;
    output_vat = ATB_sale * 0.05;

    printf("\nmashreq = %f\nStripe Fees = %f\nInput VAT = %f\nATB Sales = %f\nOutput VAT = %f\n", mashreq, stripe_fees, input_vat, ATB_sale, output_vat);

    return 0;
}
