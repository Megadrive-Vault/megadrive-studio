#ifndef __mdSpy_H__
#define __mdSpy_H__

///////////////////////////////////////////////////////////////////////////////
// Class definition
///////////////////////////////////////////////////////////////////////////////
class mdSymbol;

class mdSpy
{
	///////////////////////////////////////////////////////////////////////////
	public:
	///////
	
	mdSpy();
	~mdSpy();

	//unsigned int Address;
	//wxString Name;
	//int ListIndex;
	//int Type;	
	//mdSymbol*	Other;
	
	int m_Length;
	int m_ListIndex;
	int m_ArraySize;
	unsigned int m_Value;
	bool m_IsFromArray;
	bool m_DisplayHexa;
	mdSymbol *m_Symbol;
	
	void SetName(wxString &name);
	void SetAddress(int address,bool UpdateSymbol);
	wxString& GetName(void);
	int GetAddress(void);
	
	///////////////////////////////////////////////////////////////////////////
	protected:
	//////////	
	unsigned int m_Address;
	wxString m_Name;
	
};

///////////////////////////////////////////////////////////////////////////////
#endif