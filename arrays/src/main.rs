mod max_min_in_array;
mod reverse_array;

use max_min_in_array::max_element;
use max_min_in_array::min_element;
use reverse_array::reverse_array;


fn main() {
    let mut numbers = [1, 2, 3, 4, 5, 9, 12, 14];

    match max_element(&numbers) {
        Some(max) => println!("The maximum element is: {}", max),
        None => println!("The array is empty!"),
    }

    match min_element(&numbers) {
        Some(min) => println!("The minimum element is: {}", min),
        None => println!("The array is empty!"),
    }

    reverse_array(&mut numbers);
    println!("Reversed array: {:?}", numbers);

}
