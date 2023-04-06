
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_memory_grow.4.h"

void test() {
    memorygrow4Instance instance;
    memorygrow4Instantiate(&instance, resolveTestImports);
    printStart("memory_grow.4.wasm");
    assertEqualU32(
        memorygrow4_asX2DbrX2Dvalue(&instance),
        1u,
        "as-br-value()"
    );
    memorygrow4_asX2Dbr_ifX2Dcond(&instance);
    assertEqualU32(
        memorygrow4_asX2Dbr_ifX2Dvalue(&instance),
        1u,
        "as-br_if-value()"
    );
    assertEqualU32(
        memorygrow4_asX2Dbr_ifX2DvalueX2Dcond(&instance),
        6u,
        "as-br_if-value-cond()"
    );
    memorygrow4_asX2Dbr_tableX2Dindex(&instance);
    assertEqualU32(
        memorygrow4_asX2Dbr_tableX2Dvalue(&instance),
        1u,
        "as-br_table-value()"
    );
    assertEqualU32(
        memorygrow4_asX2Dbr_tableX2DvalueX2Dindex(&instance),
        6u,
        "as-br_table-value-index()"
    );
    assertEqualU32(
        memorygrow4_asX2DreturnX2Dvalue(&instance),
        1u,
        "as-return-value()"
    );
    assertEqualU32(
        memorygrow4_asX2DifX2Dcond(&instance),
        0u,
        "as-if-cond()"
    );
    assertEqualU32(
        memorygrow4_asX2DifX2Dthen(&instance),
        1u,
        "as-if-then()"
    );
    assertEqualU32(
        memorygrow4_asX2DifX2Delse(&instance),
        1u,
        "as-if-else()"
    );
    assertEqualU32(
        memorygrow4_asX2DselectX2Dfirst(&instance, 0u, 1u),
        1u,
        "as-select-first(0u, 1u)"
    );
    assertEqualU32(
        memorygrow4_asX2DselectX2Dsecond(&instance, 0u, 0u),
        1u,
        "as-select-second(0u, 0u)"
    );
    assertEqualU32(
        memorygrow4_asX2DselectX2Dcond(&instance),
        0u,
        "as-select-cond()"
    );
    assertEqualU32(
        memorygrow4_asX2DcallX2Dfirst(&instance),
        4294967295u,
        "as-call-first()"
    );
    assertEqualU32(
        memorygrow4_asX2DcallX2Dmid(&instance),
        4294967295u,
        "as-call-mid()"
    );
    assertEqualU32(
        memorygrow4_asX2DcallX2Dlast(&instance),
        4294967295u,
        "as-call-last()"
    );
    assertEqualU32(
        memorygrow4_asX2Dcall_indirectX2Dfirst(&instance),
        4294967295u,
        "as-call_indirect-first()"
    );
    assertEqualU32(
        memorygrow4_asX2Dcall_indirectX2Dmid(&instance),
        4294967295u,
        "as-call_indirect-mid()"
    );
    assertEqualU32(
        memorygrow4_asX2Dcall_indirectX2Dlast(&instance),
        4294967295u,
        "as-call_indirect-last()"
    );
    memorygrow4_asX2DlocalX2EsetX2Dvalue(&instance);
    assertEqualU32(
        memorygrow4_asX2DlocalX2EteeX2Dvalue(&instance),
        1u,
        "as-local.tee-value()"
    );
    memorygrow4_asX2DglobalX2EsetX2Dvalue(&instance);
    assertEqualU32(
        memorygrow4_asX2DloadX2Daddress(&instance),
        0u,
        "as-load-address()"
    );
    assertEqualU32(
        memorygrow4_asX2DloadNX2Daddress(&instance),
        0u,
        "as-loadN-address()"
    );
    memorygrow4_asX2DstoreX2Daddress(&instance);
    memorygrow4_asX2DstoreX2Dvalue(&instance);
    memorygrow4_asX2DstoreNX2Daddress(&instance);
    memorygrow4_asX2DstoreNX2Dvalue(&instance);
    assertEqualU32(
        memorygrow4_asX2DunaryX2Doperand(&instance),
        31u,
        "as-unary-operand()"
    );
    assertEqualU32(
        memorygrow4_asX2DbinaryX2Dleft(&instance),
        11u,
        "as-binary-left()"
    );
    assertEqualU32(
        memorygrow4_asX2DbinaryX2Dright(&instance),
        9u,
        "as-binary-right()"
    );
    assertEqualU32(
        memorygrow4_asX2DtestX2Doperand(&instance),
        0u,
        "as-test-operand()"
    );
    assertEqualU32(
        memorygrow4_asX2DcompareX2Dleft(&instance),
        1u,
        "as-compare-left()"
    );
    assertEqualU32(
        memorygrow4_asX2DcompareX2Dright(&instance),
        1u,
        "as-compare-right()"
    );
    assertEqualU32(
        memorygrow4_asX2DmemoryX2EgrowX2Dsize(&instance),
        1u,
        "as-memory.grow-size()"
    );
}
