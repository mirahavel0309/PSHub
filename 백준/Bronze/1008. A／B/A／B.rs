use std::io::{self};
fn main() {
    let mut input  = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut it = input.split_whitespace();
    let a: f64 = it.next().unwrap().parse().unwrap();
    let b: f64 = it.next().unwrap().parse().unwrap();

    print!("{:.10}", a / b);
}