public class ProductSearch {

    void searchProduct(String productName) {
        System.out.println("Searching for " + productName);
    }

    void searchProduct(String productName, String category) {
        System.out.println("Searching for " + productName);
        System.out.println("Category " + category);
    }

    public static void main(String[] args) {

        ProductSearch search = new ProductSearch();

        search.searchProduct("Laptop");

        search.searchProduct("Laptop", "Electronics");
    }
}
