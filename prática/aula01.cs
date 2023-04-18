{
    public string Nome;
    public string Email;
}
class Program
{
    public static void Main(string[] args)
    {
        Pessoa p1 = new Pessoa();
        p1.Nome = "Davi";
        p1.Email = "davi_m_leal@hotmail.com";

        Pessoa p2 = new Pessoa();
        p2.Nome = "Manoel";
        p2.Email = "manoel.m.oi@gmail.com";

        Console.WriteLine("Nome: {0}, email: {1}",
            p1.Nome, p1.Email);
        Console.WriteLine("Nome: {0}, email: {1}",
            p2.Nome, p2.Email);
    }
}