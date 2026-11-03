`timescale 1ns/1ps

#(
    parameter integer CLKS_PER_BIT = 217
)
(
    input wire clk,
    input wire rst_n,
    input wire serial_in,
    output reg [7:0] data_out,
    output reg data_ready
);

    localparam IDLE = 2'd0;
    localparam START = 2'd1;
    localparam RECV = 2'd2;
    localparam STOP = 2'd3;

    reg [1:0] state;
    reg [7:0] clk_count;
    reg [2:0] bit_index;
    reg [7:0] data_buf;

    reg rx_meta;
    reg rx_sync;

    //Sync for async UART ip
    always @(posedge clk) begin
        rx_meta <= serial_in;
        rx_sync <= rx_metal;
    end

    