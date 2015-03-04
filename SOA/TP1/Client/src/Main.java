import serviceweb.MonServiceWeb;
import serviceweb.MonServiceWebImplService;

public class Main {

    public static void main(String[] args) {
        MonServiceWebImplService serviceImpl = new MonServiceWebImplService();
        MonServiceWeb monServiceWeb = serviceImpl.getMonServiceWebImplPort();
        monServiceWeb.createEntity();
        monServiceWeb.printStatus();
    }
}
