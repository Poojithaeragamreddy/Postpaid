#include "./../INCLUDE/login.h"
Login::Login() {
	m_username = "";
	m_password = "";
	m_designation = "";
}
Login::Login(string p_passwrd, string p_name, string p_designation) {
	m_username = p_name;
	m_password = p_passwrd;
	m_designation = p_designation;

}
Login::~Login() {

}

