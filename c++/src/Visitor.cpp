#include "model/Html.hpp"
#include "Visitor.hpp"

void PrinterVisitor::visit (HtmlElement* e)
{
	 (void) e;
}

void PrinterVisitor::visit (Body* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 _result += "<body>";
	 for (HtmlElement* el : e->getHtmlElements())
	 {
	 		this->visit (static_cast<P*>(el));
	 }
	 _result += "</body>";
}

void PrinterVisitor::visit (Head* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 _result += "<head>";
	 this->visit (e->getTitle());
	 _result += "</head>";
}

void PrinterVisitor::visit (P* e)
{
	 if (e == NULL)
	 {
		  return;
	 }
	 _result += "<p>";
	 _result += e->getText();
	 _result += "</p>";

}

void PrinterVisitor::visit (Title* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 _result += "<title>" + e->getName() + "</title>";
}

void PrinterVisitor::visit (Document* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 _result += "<html>";
	 this->visit (e->getHead());
	 this->visit (e->getBody());
	 _result += "</html>";
}


void TextOnlyVisitor::visit (HtmlElement* e)
{
	 (void) e;
}

void TextOnlyVisitor::visit (Body* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 for (HtmlElement* el : e->getHtmlElements())
	 {
	 		this->visit (static_cast<P*>(el));
	 }
}

void TextOnlyVisitor::visit (Head* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 this->visit (e->getTitle());
}

void TextOnlyVisitor::visit (P* e)
{
	 if (e == NULL)
	 {
		  return;
	 }
	 _result += e->getText() + "\n";

}

void TextOnlyVisitor::visit (Title* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 _result += "Title" + e->getName() + "\n";
}

void TextOnlyVisitor::visit (Document* e)
{
	 if (e == NULL)
	 {
		  return;
	 }

	 this->visit (e->getHead());
	 this->visit (e->getBody());
}



