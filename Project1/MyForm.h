#pragma once
#include "string"
#include "GUI.h"
#include "iostream"


namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Text;

	/// <summary>
	/// Zusammenfassung f�r MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{
			
			InitializeComponent();
			InitializeDrwatools();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			
		}

	private:
		void drawpoint(int x, int y)
		{
			
			this->map_area_graph ->FillEllipse(red_point, x, y, 10, 10);
		}

		void drawpointandlabel(int x, int y, std::string lable_name)
		{
			System::String^ sys_str_lable_name = gcnew String(lable_name.c_str());
			this->drawpoint(x-5, y-5);			
			map_area_graph->DrawString(sys_str_lable_name, this->lable_font, this->text_brush,float (x+10),float (y-5));
		}

		void adddropdown(std::string new_drop)
		{
			System::String^ sys_str = gcnew String(new_drop.c_str());
			this->StartBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { sys_str });
			this->DestinationBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { sys_str });
		}

		void addCity(Citys new_city)
		{
			drawpointandlabel(new_city.get_x_pos(), new_city.get_y_pos(), new_city.get_name());
			adddropdown(new_city.get_name());
		}

		void connect_city(Citys one, Citys two)
		{
			map_area_graph->DrawLine(black_line, one.get_x_pos(), one.get_y_pos(), two.get_x_pos(), two.get_y_pos());
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ MapArea;
	private: System::Windows::Forms::CheckBox^ AsternCheckBox;
	private: System::Windows::Forms::CheckBox^ DijkstraCheckBox;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::ComboBox^ StartBox;
	private: System::Windows::Forms::ComboBox^ DestinationBox;
	private: System::Windows::Forms::Label^ FromLabel;
	private: System::Windows::Forms::Label^ ToLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ newMapButton;
	private: System::Windows::Forms::OpenFileDialog^ NewMapDialog;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ComboBox^ EmptyBox;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: Graphics^ map_area_graph;
	private: Pen^ black_line;
	private: SolidBrush^ red_point;
	private: SolidBrush^ text_brush;
	private: System::Drawing::Font^ lable_font;
	private: System::Drawing::StringFormat^ text_format;

	private: System::ComponentModel::IContainer^ components;

	protected:

	public:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MapArea = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AsternCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DijkstraCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StartBox = (gcnew System::Windows::Forms::ComboBox());
			this->DestinationBox = (gcnew System::Windows::Forms::ComboBox());
			this->FromLabel = (gcnew System::Windows::Forms::Label());
			this->ToLabel = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->newMapButton = (gcnew System::Windows::Forms::Button());
			this->NewMapDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->EmptyBox = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->MapArea->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// MapArea
			// 
			this->MapArea->BackColor = System::Drawing::SystemColors::Window;
			this->MapArea->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MapArea.BackgroundImage")));
			this->MapArea->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->MapArea->Controls->Add(this->label3);
			this->MapArea->Location = System::Drawing::Point(12, 12);
			this->MapArea->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MapArea->Name = L"MapArea";
			this->MapArea->Size = System::Drawing::Size(1304, 1082);
			this->MapArea->TabIndex = 0;
			this->MapArea->Click += gcnew System::EventHandler(this, &MyForm::MapArea_Click);
			this->MapArea->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MapArea_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(852, 502);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 8;
			// 
			// AsternCheckBox
			// 
			this->AsternCheckBox->AutoSize = true;
			this->AsternCheckBox->Location = System::Drawing::Point(1325, 226);
			this->AsternCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AsternCheckBox->Name = L"AsternCheckBox";
			this->AsternCheckBox->Size = System::Drawing::Size(78, 21);
			this->AsternCheckBox->TabIndex = 1;
			this->AsternCheckBox->Text = L"A-Stern";
			this->AsternCheckBox->UseVisualStyleBackColor = true;
			// 
			// DijkstraCheckBox
			// 
			this->DijkstraCheckBox->AutoSize = true;
			this->DijkstraCheckBox->Location = System::Drawing::Point(1431, 226);
			this->DijkstraCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DijkstraCheckBox->Name = L"DijkstraCheckBox";
			this->DijkstraCheckBox->Size = System::Drawing::Size(77, 21);
			this->DijkstraCheckBox->TabIndex = 2;
			this->DijkstraCheckBox->Text = L"Dijkstra";
			this->DijkstraCheckBox->UseVisualStyleBackColor = true;
			// 
			// StartButton
			// 
			this->StartButton->BackColor = System::Drawing::SystemColors::Control;
			this->StartButton->Location = System::Drawing::Point(1325, 254);
			this->StartButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(236, 59);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = false;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			this->StartButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::StartButton_MouseLeave);
			this->StartButton->MouseHover += gcnew System::EventHandler(this, &MyForm::StartButton_MouseHover);
			// 
			// StartBox
			// 
			this->StartBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->StartBox->FormattingEnabled = true;
			this->StartBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Berlin" });
			this->StartBox->Location = System::Drawing::Point(1325, 105);
			this->StartBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StartBox->Name = L"StartBox";
			this->StartBox->Size = System::Drawing::Size(236, 24);
			this->StartBox->TabIndex = 4;
			this->StartBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::StartBox_SelectedIndexChanged);
			// 
			// DestinationBox
			// 
			this->DestinationBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DestinationBox->FormattingEnabled = true;
			this->DestinationBox->Location = System::Drawing::Point(1325, 176);
			this->DestinationBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DestinationBox->Name = L"DestinationBox";
			this->DestinationBox->Size = System::Drawing::Size(236, 24);
			this->DestinationBox->TabIndex = 5;
			// 
			// FromLabel
			// 
			this->FromLabel->AutoSize = true;
			this->FromLabel->BackColor = System::Drawing::Color::Transparent;
			this->FromLabel->Location = System::Drawing::Point(1321, 74);
			this->FromLabel->Name = L"FromLabel";
			this->FromLabel->Size = System::Drawing::Size(44, 17);
			this->FromLabel->TabIndex = 6;
			this->FromLabel->Text = L"From:";
			// 
			// ToLabel
			// 
			this->ToLabel->AutoSize = true;
			this->ToLabel->Location = System::Drawing::Point(1321, 146);
			this->ToLabel->Name = L"ToLabel";
			this->ToLabel->Size = System::Drawing::Size(29, 17);
			this->ToLabel->TabIndex = 7;
			this->ToLabel->Text = L"To:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(1159, 404);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 17);
			this->linkLabel1->TabIndex = 8;
			// 
			// newMapButton
			// 
			this->newMapButton->BackColor = System::Drawing::SystemColors::Control;
			this->newMapButton->Location = System::Drawing::Point(1337, 1030);
			this->newMapButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newMapButton->Name = L"newMapButton";
			this->newMapButton->Size = System::Drawing::Size(241, 64);
			this->newMapButton->TabIndex = 9;
			this->newMapButton->Text = L"New Map";
			this->newMapButton->UseVisualStyleBackColor = false;
			this->newMapButton->Click += gcnew System::EventHandler(this, &MyForm::newMapButton_Click);
			// 
			// NewMapDialog
			// 
			this->NewMapDialog->FileName = L"NewMapDialog";
			this->NewMapDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::NewMapDialog_FileOk);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// EmptyBox
			// 
			this->EmptyBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->EmptyBox->FormattingEnabled = true;
			this->EmptyBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Berlin" });
			this->EmptyBox->Location = System::Drawing::Point(2549, 1099);
			this->EmptyBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EmptyBox->Name = L"EmptyBox";
			this->EmptyBox->Size = System::Drawing::Size(12, 25);
			this->EmptyBox->TabIndex = 10;
			this->EmptyBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(1337, 702);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(239, 322);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"A-Stern:\nKnoten durchlaufen:\t0\nBen�ritgte Zeit\t0\n\nDjkstra:\nKnoten durchlaufen:\t0\n"
				L"Ben�ritgte Zeit\t0";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1593, 1152);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->EmptyBox);
			this->Controls->Add(this->newMapButton);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->ToLabel);
			this->Controls->Add(this->FromLabel);
			this->Controls->Add(this->DestinationBox);
			this->Controls->Add(this->StartBox);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->DijkstraCheckBox);
			this->Controls->Add(this->AsternCheckBox);
			this->Controls->Add(this->MapArea);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Wegefindung";
			this->MapArea->ResumeLayout(false);
			this->MapArea->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void InitializeDrwatools(void)
		{
			this->map_area_graph = MapArea->CreateGraphics();
			this->black_line = gcnew Pen(Color::Black);
			this->red_point = gcnew SolidBrush(Color::Red);
			this->lable_font = gcnew System::Drawing::Font("Arial", 8);
			this->text_brush = gcnew SolidBrush(Color::Black);
			this->text_format = gcnew System::Drawing::StringFormat();
		}
		
	private: System::Void MapArea_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		
	}
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
	
		if (StartBox->SelectedItem == EmptyBox->SelectedItem)
		{
			MessageBox::Show("Sie m�ssen einen Startpunkt ausw�hlen");
			return;
		}

		if (DestinationBox->SelectedItem == EmptyBox->SelectedItem)
		{
			MessageBox::Show("Sie m�ssen einen Endpunkt ausw�hlen");
			return;
		}



	}

	private: System::Void StartBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		Citys berlin(543, 281, "Berlin");
		Citys Karlsruhe(183, 683, "Karlsruhe");
		this->addCity(berlin);
		this->addCity(Karlsruhe);
		this->connect_city(berlin, Karlsruhe);

	}

	private: System::Void NewMapDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) 
	{

	}
	private: System::Void newMapButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NewMapDialog->Filter = "Txt Files (*.txt)|*.txt";
		NewMapDialog->ShowDialog();
		String^ test = NewMapDialog->FileName;


	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	

	}
	private: System::Void MapArea_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Point mouse_position = MapArea->PointToClient(Cursor->Position);
		std::cout << "X:" << mouse_position.X << "\n" << "Y:" << mouse_position.Y<< "\n";
		
	}


private: System::Void StartButton_MouseHover(System::Object^ sender, System::EventArgs^ e) 
	{
	this->StartButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	}
private: System::Void StartButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
	{
	this->StartButton->BackColor = System::Drawing::SystemColors::Control;
	}
};
}

