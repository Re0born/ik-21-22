private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    const float pi = 3.1415f;
    float r, d, s, v;

    r = r.Parse(this->textBox1->Text);

    switch (comboBox1->SelectedIndex)
    {
    case 0:
        d = 2 * pi * r;
        label2->Text = "Довжина кола = " + d.ToString();
        break;
    case 1:
        s = pi * r * r;
        label2->Text = "Площа круга = " + s.ToString();
        break;
    case 2:
        v = 4.0 / 3.0 * pi * r * r * r;
        label2->Text = "Об'єм кулі = " + v.ToString();
        break;
    }
}
