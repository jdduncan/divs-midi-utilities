#ifndef CONTROL_CHANGE_EVENT_INCLUDED
#define CONTROL_CHANGE_EVENT_INCLUDED

class ControlChangeEventRow;
class ControlChangeEventTimeCell;
class ControlChangeEventTrackCell;
class ControlChangeEventChannelCell;
class ControlChangeEventNumberCell;
class ControlChangeEventValueCell;

#include <wx/wx.h>
#include <midifile.h>
#include "sequence-editor.h"

class ControlChangeEventRow: public Row
{
public:
	ControlChangeEventRow(SequenceEditor* sequence_editor, long step_number, MidiFileEvent_t event);
};

class ControlChangeEventTimeCell: public Cell
{
public:
	ControlChangeEventTimeCell(Row* row);
	wxString GetValueText();
};

class ControlChangeEventTrackCell: public Cell
{
public:
	ControlChangeEventTrackCell(Row* row);
	wxString GetValueText();
};

class ControlChangeEventChannelCell: public Cell
{
public:
	ControlChangeEventChannelCell(Row* row);
	wxString GetValueText();
};

class ControlChangeEventNumberCell: public Cell
{
public:
	ControlChangeEventNumberCell(Row* row);
	wxString GetValueText();
};

class ControlChangeEventValueCell: public Cell
{
public:
	ControlChangeEventValueCell(Row* row);
	wxString GetValueText();
};

#endif
