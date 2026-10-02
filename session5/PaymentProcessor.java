class PaymentProcessor {

    void processPayment(double amount) {
        System.out.println("Payment without coupon");
        System.out.println("Final Amount: " + amount);
    }

    void processPayment(double amount, String couponCode) {
        System.out.println("Payment with coupon: " + couponCode);

        double discount = 50;
        double finalAmount = amount - discount;

        System.out.println("Final Amount: " + finalAmount);
    }

    public static void main(String[] args) {
        PaymentProcessor p = new PaymentProcessor();

        p.processPayment(500);
        p.processPayment(500, "SAVE50");
    }
}