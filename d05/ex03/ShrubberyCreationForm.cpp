#include "ShrubberyCreationForm.hpp"

std::string	const ShrubberyCreationForm::_trees[3] = {
		"      /\\      "
		"     /\\*\\     "
		"    /\\O\\*\\    "
		"   /*/\\/\\/\\   "
		"  /\\O\\/\\*\\/\\  "
		" /\\*\\/\\*\\/\\/\\ "
		"/\\O\\/\\/*/\\/O/\\"
		"      ||      "
		"      ||      "
		"      ||      ",
		"		      /\\"
		"            <  >\\"
		"             \\/\\"
		"             /\\"
		"            /  \\"
		"           /++++\\"
		"          /  ()  \\"
		"          /      \\"
		"         /~`~`~`~`\\"
		"        /  ()  ()  \\"
		"        /          \\"
		"       /*&*&*&*&*&*&\\"
		"      /  ()  ()  ()  \\"
		"      /              \\"
		"     /++++++++++++++++\\"
		"    /  ()  ()  ()  ()  \\"
		"    /                  \\"
		"   /~`~`~`~`~`~`~`~`~`~`\\"
		"  /  ()  ()  ()  ()  ()  \\"
		"  /*&*&*&*&*&*&*&*&*&*&*&\\"
		" /                        \\"
		"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\"
		"           |   |"
		"          |`````|"
		"          \\_____/",
		"		  v"
		"        >X<"
		"         A"
		"        d$b"
		"      .d\\$$b."
		"    .d$i$$\\$$b."
		"       d$$@b"
		"      d\\$$$ib"
		"    .d$$$\\$$$b"
		"  .d$$@$$$$\\$$ib."
		"      d$$i$$b"
		"     d\\$$$$@$b"
		"  .d$@$$\\$$$$$@b."
		".d$$$$i$$$\\$$$$$$b."
		"        ###"
		"        ###"
		"        ###"};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("shrubbery creation", 72, 45) , _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	_target = rhs._target;
	_signed = rhs.isSigned();
	return *this;
}

void		ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{
	if (!Form::isSigned())
		throw Form::FormUnsigned();
	else if (exec.getGrade() > 137)
		throw Form::GradeTooLowException();
	else
	{
		std::stringstream ss;
		ss << _target << "_shrubbery";
		std::ofstream ofs(ss.str());
		ofs.clear();
		ofs << _trees[rand() % 3 + 1] << std::endl;
		ofs << _trees[rand() % 3 + 1] << std::endl;
		ofs.clear();
	}
}

Form	*ShrubberyCreationForm::generate(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

