///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "widgets/std_bitmap_button.h"
#include "widgets/wx_grid.h"

#include "panel_jobs_base.h"

///////////////////////////////////////////////////////////////////////////

PANEL_JOBS_BASE::PANEL_JOBS_BASE( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : PANEL_NOTEBOOK_BASE( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerUpper;
	bSizerUpper = new wxBoxSizer( wxHORIZONTAL );

	wxStaticBoxSizer* sbJobs;
	sbJobs = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Jobs") ), wxVERTICAL );

	m_jobsGrid = new WX_GRID( sbJobs->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_jobsGrid->CreateGrid( 5, 2 );
	m_jobsGrid->EnableEditing( true );
	m_jobsGrid->EnableGridLines( true );
	m_jobsGrid->EnableDragGridSize( false );
	m_jobsGrid->SetMargins( 0, 0 );

	// Columns
	m_jobsGrid->SetColSize( 0, 30 );
	m_jobsGrid->SetColSize( 1, 260 );
	m_jobsGrid->EnableDragColMove( false );
	m_jobsGrid->EnableDragColSize( false );
	m_jobsGrid->SetColLabelSize( 0 );
	m_jobsGrid->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_jobsGrid->EnableDragRowSize( true );
	m_jobsGrid->SetRowLabelSize( 0 );
	m_jobsGrid->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_jobsGrid->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	sbJobs->Add( m_jobsGrid, 1, wxEXPAND|wxLEFT|wxRIGHT|wxTOP, 3 );

	wxBoxSizer* bJobsButtons;
	bJobsButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAddJob = new STD_BITMAP_BUTTON( sbJobs->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bJobsButtons->Add( m_buttonAddJob, 0, wxALIGN_CENTER|wxBOTTOM|wxTOP, 5 );

	m_buttonUp = new STD_BITMAP_BUTTON( sbJobs->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bJobsButtons->Add( m_buttonUp, 0, wxALIGN_CENTER|wxBOTTOM|wxLEFT|wxTOP, 5 );

	m_buttonDown = new STD_BITMAP_BUTTON( sbJobs->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bJobsButtons->Add( m_buttonDown, 0, wxALIGN_CENTER|wxBOTTOM|wxLEFT|wxTOP, 5 );


	bJobsButtons->Add( 20, 0, 0, wxEXPAND, 5 );

	m_buttonDelete = new STD_BITMAP_BUTTON( sbJobs->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bJobsButtons->Add( m_buttonDelete, 0, wxALL, 5 );


	bJobsButtons->Add( 0, 0, 1, wxEXPAND, 5 );


	sbJobs->Add( bJobsButtons, 0, wxEXPAND|wxLEFT|wxRIGHT, 3 );


	bSizerUpper->Add( sbJobs, 7, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbOutputs;
	sbOutputs = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Outputs") ), wxVERTICAL );

	m_outputList = new wxScrolledWindow( sbOutputs->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxVSCROLL );
	m_outputList->SetScrollRate( 5, 5 );
	m_outputListSizer = new wxBoxSizer( wxVERTICAL );


	m_outputList->SetSizer( m_outputListSizer );
	m_outputList->Layout();
	m_outputListSizer->Fit( m_outputList );
	sbOutputs->Add( m_outputList, 1, wxEXPAND|wxALL, 0 );

	wxBoxSizer* bOutputButtons;
	bOutputButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonOutputAdd = new STD_BITMAP_BUTTON( sbOutputs->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bOutputButtons->Add( m_buttonOutputAdd, 0, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxTOP, 5 );


	sbOutputs->Add( bOutputButtons, 0, wxEXPAND|wxLEFT, 3 );


	bSizerUpper->Add( sbOutputs, 4, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );


	bSizerMain->Add( bSizerUpper, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );


	bSizerButtons->Add( 0, 0, 1, wxEXPAND, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, _("Save Jobset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonSave, 0, wxALL, 5 );


	bSizerButtons->Add( 10, 0, 0, wxEXPAND, 5 );

	m_buttonRunAllOutputs = new wxButton( this, wxID_ANY, _("Generate All Outputs"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonRunAllOutputs, 0, wxALL, 5 );


	bSizerMain->Add( bSizerButtons, 0, wxEXPAND|wxTOP|wxBOTTOM, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_jobsGrid->Connect( wxEVT_SIZE, wxSizeEventHandler( PANEL_JOBS_BASE::OnSizeGrid ), NULL, this );
	m_buttonAddJob->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnAddJobClick ), NULL, this );
	m_buttonUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnJobButtonUp ), NULL, this );
	m_buttonDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnJobButtonDown ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnJobButtonDelete ), NULL, this );
	m_buttonOutputAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnAddOutputClick ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnSaveButtonClick ), NULL, this );
	m_buttonRunAllOutputs->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnRunAllJobsClick ), NULL, this );
}

PANEL_JOBS_BASE::~PANEL_JOBS_BASE()
{
	// Disconnect Events
	m_jobsGrid->Disconnect( wxEVT_SIZE, wxSizeEventHandler( PANEL_JOBS_BASE::OnSizeGrid ), NULL, this );
	m_buttonAddJob->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnAddJobClick ), NULL, this );
	m_buttonUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnJobButtonUp ), NULL, this );
	m_buttonDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnJobButtonDown ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnJobButtonDelete ), NULL, this );
	m_buttonOutputAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnAddOutputClick ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnSaveButtonClick ), NULL, this );
	m_buttonRunAllOutputs->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOBS_BASE::OnRunAllJobsClick ), NULL, this );

}

PANEL_JOB_OUTPUT_BASE::PANEL_JOB_OUTPUT_BASE( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 1, 3, 5, 5 );
	fgSizer3->AddGrowableCol( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bitmapOutputType = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_bitmapOutputType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textOutputType = new wxStaticText( this, wxID_ANY, _("dummy"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textOutputType->Wrap( -1 );
	m_textOutputType->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	fgSizer3->Add( m_textOutputType, 0, wxALIGN_CENTER_VERTICAL|wxTOP, 1 );

	m_statusBitmap = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_statusBitmap, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerMain->Add( fgSizer3, 0, wxEXPAND|wxALL, 5 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonProperties = new STD_BITMAP_BUTTON( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bSizerButtons->Add( m_buttonProperties, 0, wxALL, 5 );

	m_buttonDelete = new STD_BITMAP_BUTTON( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bSizerButtons->Add( m_buttonDelete, 0, wxALL, 5 );

	m_buttonGenerate = new wxButton( this, wxID_ANY, _("Generate"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonGenerate, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerMain->Add( bSizerButtons, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();
	bSizerMain->Fit( this );

	// Connect Events
	this->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( PANEL_JOB_OUTPUT_BASE::OnRightDown ) );
	m_statusBitmap->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( PANEL_JOB_OUTPUT_BASE::OnLastStatusClick ), NULL, this );
	m_buttonProperties->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOB_OUTPUT_BASE::OnProperties ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOB_OUTPUT_BASE::OnDelete ), NULL, this );
	m_buttonGenerate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOB_OUTPUT_BASE::OnGenerate ), NULL, this );
}

PANEL_JOB_OUTPUT_BASE::~PANEL_JOB_OUTPUT_BASE()
{
	// Disconnect Events
	this->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( PANEL_JOB_OUTPUT_BASE::OnRightDown ) );
	m_statusBitmap->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( PANEL_JOB_OUTPUT_BASE::OnLastStatusClick ), NULL, this );
	m_buttonProperties->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOB_OUTPUT_BASE::OnProperties ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOB_OUTPUT_BASE::OnDelete ), NULL, this );
	m_buttonGenerate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PANEL_JOB_OUTPUT_BASE::OnGenerate ), NULL, this );

}

DIALOG_JOB_OUTPUT_BASE::DIALOG_JOB_OUTPUT_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 4, 2, 5, 5 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->AddGrowableRow( 3 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textArchiveDesc = new wxStaticText( this, wxID_ANY, _("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textArchiveDesc->Wrap( -1 );
	fgSizer1->Add( m_textArchiveDesc, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlDescription = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlDescription, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_textArchiveFormat = new wxStaticText( this, wxID_ANY, _("Format:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textArchiveFormat->Wrap( -1 );
	fgSizer1->Add( m_textArchiveFormat, 0, wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceArchiveformatChoices;
	m_choiceArchiveformat = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceArchiveformatChoices, 0 );
	m_choiceArchiveformat->SetSelection( 0 );
	m_choiceArchiveformat->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( m_choiceArchiveformat, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_textOutputPath = new wxStaticText( this, wxID_ANY, _("Output path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textOutputPath->Wrap( -1 );
	fgSizer1->Add( m_textOutputPath, 0, wxALIGN_CENTER_VERTICAL, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrlOutputPath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlOutputPath->SetMinSize( wxSize( 350,-1 ) );

	bSizer16->Add( m_textCtrlOutputPath, 1, wxALIGN_CENTER_VERTICAL, 5 );

	m_buttonOutputPath = new STD_BITMAP_BUTTON( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	bSizer16->Add( m_buttonOutputPath, 0, wxALIGN_CENTER_VERTICAL, 5 );


	fgSizer1->Add( bSizer16, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, _("Include jobs:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer1->Add( m_staticText10, 0, wxTOP, 5 );

	wxArrayString m_includeJobsChoices;
	m_includeJobs = new wxCheckListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_includeJobsChoices, 0 );
	m_includeJobs->SetMinSize( wxSize( 300,200 ) );

	fgSizer1->Add( m_includeJobs, 1, wxEXPAND, 5 );


	bSizerMain->Add( fgSizer1, 1, wxEXPAND|wxALL, 10 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	bSizerMain->Add( m_sdbSizer1, 0, wxBOTTOM|wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();
	bSizerMain->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonOutputPath->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_JOB_OUTPUT_BASE::onOutputPathBrowseClicked ), NULL, this );
}

DIALOG_JOB_OUTPUT_BASE::~DIALOG_JOB_OUTPUT_BASE()
{
	// Disconnect Events
	m_buttonOutputPath->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_JOB_OUTPUT_BASE::onOutputPathBrowseClicked ), NULL, this );

}

DIALOG_SPECIAL_EXECUTE_BASE::DIALOG_SPECIAL_EXECUTE_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 5, 5 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textCommand = new wxStaticText( this, wxID_ANY, _("Command:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCommand->Wrap( -1 );
	fgSizer1->Add( m_textCommand, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlCommand = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlCommand->SetMinSize( wxSize( 350,-1 ) );

	fgSizer1->Add( m_textCtrlCommand, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );

	m_textOutputPath = new wxStaticText( this, wxID_ANY, _("Output path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textOutputPath->Wrap( -1 );
	fgSizer1->Add( m_textOutputPath, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlOutputPath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlOutputPath->SetMinSize( wxSize( 350,-1 ) );

	fgSizer1->Add( m_textCtrlOutputPath, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );


	bSizerMain->Add( fgSizer1, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxVERTICAL );

	m_cbRecordOutput = new wxCheckBox( this, wxID_ANY, _("Record output messages"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottom->Add( m_cbRecordOutput, 0, wxLEFT, 5 );

	m_cbIgnoreExitCode = new wxCheckBox( this, wxID_ANY, _("Ignore non-zero exit code"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottom->Add( m_cbIgnoreExitCode, 0, wxLEFT|wxTOP, 5 );


	bSizerMain->Add( bSizerBottom, 0, wxALL|wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	bSizerMain->Add( m_sdbSizer1, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();
	bSizerMain->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_cbRecordOutput->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DIALOG_SPECIAL_EXECUTE_BASE::OnRecordOutputClicked ), NULL, this );
}

DIALOG_SPECIAL_EXECUTE_BASE::~DIALOG_SPECIAL_EXECUTE_BASE()
{
	// Disconnect Events
	m_cbRecordOutput->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DIALOG_SPECIAL_EXECUTE_BASE::OnRecordOutputClicked ), NULL, this );

}

DIALOG_COPYFILES_JOB_BASE::DIALOG_COPYFILES_JOB_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 5, 5 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textSource = new wxStaticText( this, wxID_ANY, _("Source:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textSource->Wrap( -1 );
	fgSizer1->Add( m_textSource, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlSource = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlSource->SetMinSize( wxSize( 350,-1 ) );

	fgSizer1->Add( m_textCtrlSource, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );

	m_textDest = new wxStaticText( this, wxID_ANY, _("Destination:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textDest->Wrap( -1 );
	fgSizer1->Add( m_textDest, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlDest = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlDest->SetMinSize( wxSize( 350,-1 ) );

	fgSizer1->Add( m_textCtrlDest, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );


	bSizerMain->Add( fgSizer1, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxVERTICAL );

	m_cbGenerateError = new wxCheckBox( this, wxID_ANY, _("Generate error if no files copied"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottom->Add( m_cbGenerateError, 0, wxLEFT, 5 );

	m_cbOverwrite = new wxCheckBox( this, wxID_ANY, _("Overwrite files in destination"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbOverwrite->SetValue(true);
	bSizerBottom->Add( m_cbOverwrite, 0, wxLEFT|wxTOP, 5 );


	bSizerMain->Add( bSizerBottom, 0, wxALL|wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	bSizerMain->Add( m_sdbSizer1, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();
	bSizerMain->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_cbGenerateError->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DIALOG_COPYFILES_JOB_BASE::OnRecordOutputClicked ), NULL, this );
}

DIALOG_COPYFILES_JOB_BASE::~DIALOG_COPYFILES_JOB_BASE()
{
	// Disconnect Events
	m_cbGenerateError->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DIALOG_COPYFILES_JOB_BASE::OnRecordOutputClicked ), NULL, this );

}

DIALOG_OUTPUT_RUN_RESULTS_BASE::DIALOG_OUTPUT_RUN_RESULTS_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 450,250 ), wxDefaultSize );

	wxBoxSizer* bMainSizer;
	bMainSizer = new wxBoxSizer( wxVERTICAL );

	m_staticTextOutputName = new wxStaticText( this, wxID_ANY, _("dummy"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextOutputName->Wrap( -1 );
	bMainSizer->Add( m_staticTextOutputName, 0, wxALL, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_jobList = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxLC_SINGLE_SEL );
	bSizer16->Add( m_jobList, 1, wxALL|wxEXPAND, 5 );

	m_textCtrlOutput = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_BESTWRAP|wxTE_MULTILINE|wxTE_READONLY );
	bSizer16->Add( m_textCtrlOutput, 1, wxALL|wxEXPAND, 5 );


	bMainSizer->Add( bSizer16, 1, wxEXPAND, 5 );

	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizer->Realize();

	bMainSizer->Add( m_sdbSizer, 0, wxEXPAND, 5 );


	this->SetSizer( bMainSizer );
	this->Layout();
	bMainSizer->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_jobList->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( DIALOG_OUTPUT_RUN_RESULTS_BASE::OnJobListItemSelected ), NULL, this );
	m_sdbSizerOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_OUTPUT_RUN_RESULTS_BASE::OnButtonOk ), NULL, this );
}

DIALOG_OUTPUT_RUN_RESULTS_BASE::~DIALOG_OUTPUT_RUN_RESULTS_BASE()
{
	// Disconnect Events
	m_jobList->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( DIALOG_OUTPUT_RUN_RESULTS_BASE::OnJobListItemSelected ), NULL, this );
	m_sdbSizerOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_OUTPUT_RUN_RESULTS_BASE::OnButtonOk ), NULL, this );

}
