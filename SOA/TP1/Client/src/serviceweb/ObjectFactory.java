
package serviceweb;

import javax.xml.bind.JAXBElement;
import javax.xml.bind.annotation.XmlElementDecl;
import javax.xml.bind.annotation.XmlRegistry;
import javax.xml.namespace.QName;


/**
 * This object contains factory methods for each 
 * Java content interface and Java element interface 
 * generated in the serviceweb package. 
 * <p>An ObjectFactory allows you to programatically 
 * construct new instances of the Java representation 
 * for XML content. The Java representation of XML 
 * content can consist of schema derived interfaces 
 * and classes representing the binding of schema 
 * type definitions, element declarations and model 
 * groups.  Factory methods for each of these are 
 * provided in this class.
 * 
 */
@XmlRegistry
public class ObjectFactory {

    private final static QName _PrintStatus_QNAME = new QName("http://serviceWeb/", "printStatus");
    private final static QName _CreateEntityResponse_QNAME = new QName("http://serviceWeb/", "createEntityResponse");
    private final static QName _CreateEntity_QNAME = new QName("http://serviceWeb/", "createEntity");
    private final static QName _PrintStatusResponse_QNAME = new QName("http://serviceWeb/", "printStatusResponse");

    /**
     * Create a new ObjectFactory that can be used to create new instances of schema derived classes for package: serviceweb
     * 
     */
    public ObjectFactory() {
    }

    /**
     * Create an instance of {@link PrintStatus }
     * 
     */
    public PrintStatus createPrintStatus() {
        return new PrintStatus();
    }

    /**
     * Create an instance of {@link CreateEntityResponse }
     * 
     */
    public CreateEntityResponse createCreateEntityResponse() {
        return new CreateEntityResponse();
    }

    /**
     * Create an instance of {@link CreateEntity }
     * 
     */
    public CreateEntity createCreateEntity() {
        return new CreateEntity();
    }

    /**
     * Create an instance of {@link PrintStatusResponse }
     * 
     */
    public PrintStatusResponse createPrintStatusResponse() {
        return new PrintStatusResponse();
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link PrintStatus }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://serviceWeb/", name = "printStatus")
    public JAXBElement<PrintStatus> createPrintStatus(PrintStatus value) {
        return new JAXBElement<PrintStatus>(_PrintStatus_QNAME, PrintStatus.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link CreateEntityResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://serviceWeb/", name = "createEntityResponse")
    public JAXBElement<CreateEntityResponse> createCreateEntityResponse(CreateEntityResponse value) {
        return new JAXBElement<CreateEntityResponse>(_CreateEntityResponse_QNAME, CreateEntityResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link CreateEntity }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://serviceWeb/", name = "createEntity")
    public JAXBElement<CreateEntity> createCreateEntity(CreateEntity value) {
        return new JAXBElement<CreateEntity>(_CreateEntity_QNAME, CreateEntity.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link PrintStatusResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://serviceWeb/", name = "printStatusResponse")
    public JAXBElement<PrintStatusResponse> createPrintStatusResponse(PrintStatusResponse value) {
        return new JAXBElement<PrintStatusResponse>(_PrintStatusResponse_QNAME, PrintStatusResponse.class, null, value);
    }

}
