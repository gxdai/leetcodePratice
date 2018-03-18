# Note For CPP questions

## difference between 'class' and 'public class'

Without specifying `public` the class is implicitly `internal`. This means that the class is only visible inside the same assembly. When you specify `public1`, the class is visible outside the assembly.

It is also allowed to specify the `internal` to modify explicitly.
