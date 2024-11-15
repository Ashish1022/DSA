pub fn max_element(arr: &[i32]) -> Option<i32> {
    if arr.is_empty() {
        return None;
    }
    let mut max: i32 = arr[0];
    for &num in arr.iter() {
        if num > max {
            max = num;
        }
    }
    Some(max)
}

pub fn min_element(arr: &[i32]) -> Option<i32> {
    if arr.is_empty() {
        return None;
    }
    let mut min: i32 = arr[0];
    for &num in arr.iter() {
        if num < min {
            min = num;
        }
    }
    Some(min)
}