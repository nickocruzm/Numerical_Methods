# Euler's Method

Used to analyze Differential Equations. The method explicitly is written below,

$$ y_{n+1} = y_{n} + f(t_{n},y_{n})(t_{n+1} - t_{n})$$

Personally, I'm not a fan of the above equation.
Generally we assume the step sizes $h = (t_{n+1} - t_{n})$ are uniform. If we allow $f_{n} = f(t_{n},y_{n})$ then we can rewrite the 
equation above in a less intimidating form. 

$$ y_{n+1} = y_{n} + h(f_{n})$$

## Example

Suppose we are given an I.V.P[^1]. First-order differential given $y^{'} = y$ along with its initial value $y(0) = 1$ and a step size $h = 1.0$. When it comes to differentials, I need to list things out explicity, too many implicit notation going on when it comes to differentials.

** Given [^2]**
- $t_{0} = 0$
- $y_{0} = y(t_{0}) = y(0) = 1$
- $y^{'} = \frac{dy}{dt} = f(t_{n},y_{n})$
- $f(t_{n},y_{n}) = y_{n}$
- $f(t_{0},y_{0}) = y_{0} = 1 $
- $h = (t_{n+1} - t_{n}) = 1 $

$$f(t_{0},y_{0}) = f(0,1) = 1$$

now we can apply Euler's Method to find $y_{1}$

$$y_{1} = y_{0} + h(f(t_{0},y_{0}) = 1 + 1(f(0,1)) = 1 + 1 = 2, y_{1} = 2 $$

$$y_{2} = y_{1} + h(f(t_{1} ,y_{1})) = 2 + 1(f(t_1,y_1)) = 2 + 1(f(y_1)) = 2 + 2 = 4 $$ [^3]

$$ y_{3} = y_{2} + 1(y_{2}) = 8 $$

$$ y_{4} = y_{3} + 1(y_{3}) = 16$$



[^1]: Initial Value Problem
[^2]: information that was given to us in the problem's description.
[^3]: Our differential is defined to not be dependent on (t), so we don't really care what the value of t is which is why it 'disappears'. Plug in any value for (t) and it won't effect the output
