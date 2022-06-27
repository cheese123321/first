#计算机网络基本知识：
计算机网络是多台地理上分散的、具有独立功能的计算机通过传输介质和通信设备连接，使用网络软件相互联系，实现数据通信与资源共享的系统。其目标就是信息资源共享和互效通信。计算机网络的组成分为硬件和软件，硬件又可分为主机、传输介质和通信设备，软件可分为操作系统和通信协议。所谓主机就是组成网络的各个独立的计算机。在网络中，主机运行应用程序；连接介质和通信网中的传输线路一样，起到信息的输送和设备的连接作用计算机网络的连接介质种类很多，可以是电缆、光缆、双绞线等“有线”的介质，也可以是卫星微波等“无线”介质，这和通信网中所采用的传输介质基本上是一样的。

协议对于计算机网络而言是非常重要的，可以说没有协议，就不可能有计算机网。网络协议的定义：为了使网络中的不同设备能进行下沉的数据通信而预先制定一整套通信双方相互了解和共同遵守的格式和约定。每一种计算机网络，都有一套协议支持着。由于现在计算机网种类很多，所以现有的网络通信协议的种类也很多。典型的网络通信协议有开放系统互连（OSI）协议１、X.25协议等。TCP/IP则是为Internet互联的各种网络之间能互相通信而专门设计的通信协议，又名网络通讯协议，是Internet最基本的协议、Internet国际互联网络的基础，由网络层的IP协议和传输层的TCP协议等组成（还有其他后来发展起来的网络协议，还包括ARP，ICMP，IGMP，UDP，以及让域名访问成为可能的DNS，以及电脑/手机可以自动获取IP地址的DHCP。还有形形色色的应用层的协议如HTTP/SMTP/FTP等）。TCP/IP 定义了电子设备如何连入因特网，以及数据如何在它们之间传输的标准。协议采用了4层的层级结构，每一层都呼叫它的下一层所提供的协议来完成自己的需求。通俗而言：TCP负责发现传输的问题，一有问题就发出信号，要求重新传输，直到所有数据安全正确地传输到目的地，而IP是给因特网的每一台联网设备规定一个地址。
传输层是OSI中最重要、最关键的一层,是唯一负责总体的数据传输和数据控制的一层；传输层提供端到端的交换数据的机制，检查分组编号与次序，传输层对其上三层如会话层等，提供可靠的传输服务,对网络层提供可靠的目的地站点信息主要功能。在这一层，数据的单位称为数据段（segment）。主要功能：为端到端连接提供传输服务；这种传输服务分为可靠和不可靠的,其中Tcp是典型的可靠传输,而Udp则是不可靠传输；为端到端连接提供流量控制,差错控制,服务质量(Quality of Service,QoS)等管理服务。包括的协议如下：TCP——传输控制协议，传输效率低，可靠性强。UDP——用户数据报协议，适用于传输可靠性要求不高，数据量小的数据。DCCP、SCTP、RTP、RSVP、PPTP等协议。

 
