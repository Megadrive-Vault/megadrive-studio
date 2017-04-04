#ifndef __mdCRAMPanel_H__
#define __mdCRAMPanel_H__

///////////////////////////////////////////////////////////////////////////////
// Class definition
///////////////////////////////////////////////////////////////////////////////

class mdEmu;

class mdCRAMPanel: public wxPanel
{
	///////////////////////////////////////////////////////////////////////////
	public:
	///////
	
	mdCRAMPanel(	wxWindow* parent,
								wxWindowID id,									
								const wxPoint& pos,
								const wxSize& size,
								long style,
								const wxString& name);
	~mdCRAMPanel();
	void UpdateCRAM(void);
	void SetCRAM(unsigned char* cram);

	///////////////////////////////////////////////////////////////////////////
	protected:
	//////////	

	unsigned char *m_CRAM;
	
	void OnPaint(wxPaintEvent& event);
	void OnEraseBackground(wxEraseEvent& event);

	void OnMouseMotion(wxMouseEvent& event);

	DECLARE_EVENT_TABLE()	
};

///////////////////////////////////////////////////////////////////////////////
#endif