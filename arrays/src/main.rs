mod max_min_in_array;

use max_min_in_array::max_element;
use max_min_in_array::min_element;

fn main() {
    let numbers: [i32; 6] = [1, 2, 3, 4, 5, 9];

    match max_element(&numbers) {
        Some(max) => println!("The maximum element is: {}", max),
        None => println!("The array is empty!"),
    }

    match min_element(&numbers) {
        Some(min) => println!("The minimum element is: {}", min),
        None => println!("The array is empty!"),
    }
}
