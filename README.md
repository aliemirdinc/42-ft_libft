Libft
Libft, C programlama dili için yazılmış bir kütüphane projesidir. Bu projede, standart kütüphanedeki fonksiyonların yeniden yazılması ve işlevsel ek fonksiyonların geliştirilmesi hedeflenmiştir. Proje, C dilinde uygulama geliştirirken daha kapsamlı ve etkili bir fonksiyon seti sunar.

İçindekiler:

Proje Hakkında
Fonksiyonlar
Kullanım
Kurulum
Bonus Fonksiyonlar


Proje Hakkında:
Libft projesinin amacı, libc'deki temel fonksiyonların yeniden yazılması ve ek olarak kullanışlı fonksiyonlar içeren bir C kütüphanesi oluşturulmasıdır. Bu proje sayesinde öğrenciler, C dilindeki çeşitli veri yapıları ve fonksiyonları daha derinlemesine öğrenir ve uygulama geliştirme süreçlerinde kendi kütüphanelerini oluşturma pratiği kazanır.

Fonksiyonlar:
Bu projede iki ana bölüm bulunmaktadır:

1. Libc Fonksiyonları:
Projenin ilk bölümünde, C dilindeki çeşitli standart fonksiyonların yeniden yazılması hedeflenmiştir. Bu fonksiyonlar, isalpha, isdigit, strlen, strcpy, memset gibi temel işlemler için kullanılır. Orijinal fonksiyonlara benzerlik göstermeli ve ft_ ön ekiyle tanımlanmalıdır.

2. Ek Fonksiyonlar:
Bu bölümde libc'de olmayan veya farklı formda olan fonksiyonlar geliştirilmiştir. Bu fonksiyonlar arasında ft_substr, ft_strjoin, ft_split, ft_itoa gibi hafıza yönetimi ve string işleme fonksiyonları bulunmaktadır. Tüm ek fonksiyonlar dinamik bellek (malloc) kullanılarak implement edilmiştir.

Bonus Fonksiyonlar:
Bonus kısmında, bağlantılı listeleri (linked lists) manipüle eden fonksiyonlar yazılmıştır. Bu fonksiyonlar şunları içerir:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap

Kurulum:
Proje klasörüne gidin.
make komutunu çalıştırarak kütüphaneyi derleyin. Bu işlem sonucunda libft.a dosyası oluşturulacaktır.
Kendi projelerinizde libft.a dosyasını kullanarak kütüphanedeki fonksiyonlara erişim sağlayabilirsiniz.
