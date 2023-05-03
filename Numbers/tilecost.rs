fn calculate_cost(w: f64, h: f64, c: f64) -> f64 {
    w * h * c
}

fn main() {
    println!("{}", calculate_cost(15.0, 20.0, 1.5));
}
