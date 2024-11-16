pub fn reverse_array(arr: &mut [i32]) {
    if arr.is_empty() {
        println!("Empty array!");
    }

    for i in 0..arr.len()/2 {
        arr.swap(i, arr.len()-1-i);
    }
}

