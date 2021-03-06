//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Screen;
	TButton *Btn_dot;
	TButton *Btn_1;
	TButton *Btn_4;
	TButton *Btn_7;
	TButton *Btn_sqrt;
	TButton *Btn_0;
	TButton *Btn_2;
	TButton *Btn_5;
	TButton *Btn_8;
	TButton *Btn_percent;
	TButton *Btn_equals;
	TButton *Btn_3;
	TButton *Btn_6;
	TButton *Btn_9;
	TButton *Btn_cls;
	TButton *Btn_add;
	TButton *Btn_minus;
	TButton *Btn_mult;
	TButton *Btn_div;
	TButton *Btn_del;
	void __fastcall Btn_1Click(TObject *Sender);
	void __fastcall Btn_2Click(TObject *Sender);
	void __fastcall Btn_3Click(TObject *Sender);
	void __fastcall Btn_4Click(TObject *Sender);
	void __fastcall Btn_5Click(TObject *Sender);
	void __fastcall Btn_6Click(TObject *Sender);
	void __fastcall Btn_7Click(TObject *Sender);
	void __fastcall Btn_8Click(TObject *Sender);
	void __fastcall Btn_9Click(TObject *Sender);
	void __fastcall Btn_0Click(TObject *Sender);
	void __fastcall Btn_dotClick(TObject *Sender);
	void __fastcall Btn_minusClick(TObject *Sender);
	void __fastcall Btn_multClick(TObject *Sender);
	void __fastcall Btn_divClick(TObject *Sender);
	void __fastcall Btn_clsClick(TObject *Sender);
	void __fastcall Btn_delClick(TObject *Sender);
	void __fastcall Btn_addClick(TObject *Sender);
	void __fastcall Btn_equalsClick(TObject *Sender);
	void __fastcall Btn_percentClick(TObject *Sender);
	void __fastcall Btn_sqrtClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
