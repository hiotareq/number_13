#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <unistd.h>

std::mutex all_mutex, run;

std::condition_variable a_cond;
std::condition_variable b_cond;
std::condition_variable c_cond;
std::condition_variable d_cond;
std::condition_variable e_cond;
std::condition_variable f_cond;
std::condition_variable g_cond;
std::condition_variable h_cond;
std::condition_variable i_cond;
std::condition_variable k_cond;
std::condition_variable l_cond;
std::condition_variable m_cond;
std::condition_variable n_cond;
std::condition_variable o_cond;
std::condition_variable p_cond;
std::condition_variable q_cond;
std::condition_variable r_cond;
std::condition_variable s_cond;
std::condition_variable t_cond;
std::condition_variable u_cond;
std::condition_variable v_cond;
std::condition_variable w_cond;
std::condition_variable x_cond;
std::condition_variable y_cond;
std::condition_variable z_cond;
std::condition_variable j_cond;

void print_a() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    a_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "a";
    b_cond.notify_one();
}

void print_b() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    b_cond.wait(_lock);

    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " b";

    c_cond.notify_one();
}

void print_c() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    c_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " c";

    d_cond.notify_one();
}

void print_d() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    d_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " d";

    e_cond.notify_one();
}

void print_e() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    e_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " e";

    f_cond.notify_one();
}

void print_f() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    f_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " f";

    g_cond.notify_one();
}

void print_g() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    g_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " g";

    h_cond.notify_one();

}

void print_h() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    h_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " h";

    i_cond.notify_one();
}

void print_i() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    i_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " i";

    j_cond.notify_one();

}

void print_j() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    j_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " j";

    k_cond.notify_one();
}

void print_k() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    k_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " k";

    l_cond.notify_one();
}

void print_l() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    l_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " l";

    m_cond.notify_one();
}

void print_m() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    m_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " m";

    n_cond.notify_one();
}

void print_n() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    n_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " n";

    o_cond.notify_one();
}

void print_o() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    o_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " o";

    p_cond.notify_one();
}

void print_p() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    p_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " p";

    q_cond.notify_one();
}

void print_q() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    q_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " q";

    r_cond.notify_one();
}

void print_r() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    r_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " r";

    s_cond.notify_one();
}

void print_s() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    s_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " s";

    t_cond.notify_one();
}

void print_t() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    t_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " t";

    u_cond.notify_one();
}

void print_u() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    u_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " u";

    v_cond.notify_one();
}

void print_v() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    v_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " v";

    w_cond.notify_one();
}

void print_w() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    w_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " w";


    x_cond.notify_one();
}

void print_x() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    x_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " x";

    y_cond.notify_one();
}

void print_y() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    y_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " y";

    z_cond.notify_one();
}

void print_z() {
    std::unique_lock<std::mutex> _lock(all_mutex);
    z_cond.wait(_lock);
    fflush(stdout);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << " z" << std::endl;


    a_cond.notify_one();
}

int main() {
    while (true) {
        std::thread a_thread(print_a);
        std::thread b_thread(print_b);
        std::thread c_thread(print_c);
        std::thread d_thread(print_d);
        std::thread e_thread(print_e);
        std::thread f_thread(print_f);
        std::thread g_thread(print_g);
        std::thread h_thread(print_h);
        std::thread i_thread(print_i);
        std::thread j_thread(print_j);
        std::thread k_thread(print_k);
        std::thread l_thread(print_l);
        std::thread m_thread(print_m);
        std::thread n_thread(print_n);
        std::thread o_thread(print_o);
        std::thread p_thread(print_p);
        std::thread q_thread(print_q);
        std::thread r_thread(print_r);
        std::thread s_thread(print_s);
        std::thread t_thread(print_t);
        std::thread u_thread(print_u);
        std::thread v_thread(print_v);
        std::thread w_thread(print_w);
        std::thread x_thread(print_x);
        std::thread y_thread(print_y);
        std::thread z_thread(print_z);
        a_cond.notify_one();
        a_thread.join();
        b_thread.join();
        c_thread.join();
        d_thread.join();
        e_thread.join();
        f_thread.join();
        g_thread.join();
        h_thread.join();
        i_thread.join();
        j_thread.join();
        k_thread.join();
        l_thread.join();
        m_thread.join();
        n_thread.join();
        o_thread.join();
        p_thread.join();
        q_thread.join();
        r_thread.join();
        s_thread.join();
        t_thread.join();
        u_thread.join();
        v_thread.join();
        w_thread.join();
        x_thread.join();
        y_thread.join();
        z_thread.join();
    }
    return 0;
}
