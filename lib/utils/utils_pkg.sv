`timescale 1ns/1ps

package utils_pkg;

  // Boolean AND helper (keeps parity with your VHDL band())
  function logic band(logic a, logic b);
    return a & b;
  endfunction

  // Test helper: compare bits and tag the vector under test
  task automatic expect_equal(input logic got,
                              input logic exp,
                              input string tag);
    if (got !== exp) begin
      $error("expect_equal FAIL tag=%s : got=%0b exp=%0b", tag, got, exp);
      $fatal(1);
    end
    else begin
      // Uncomment if you want PASS chatter:
      // $display("expect_equal PASS tag=%s : %0b == %0b", tag, got, exp);
    end
  endtask

endpackage
