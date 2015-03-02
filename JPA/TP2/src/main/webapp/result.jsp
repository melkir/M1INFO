<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<head>
    <title>Resultat du formulaire</title>
</head>

<body>
    <jsp:useBean id="person" class="web.AddPersonServlet" scope="request"/>
    <c:out value="" default=""/>
</body>
</html>
