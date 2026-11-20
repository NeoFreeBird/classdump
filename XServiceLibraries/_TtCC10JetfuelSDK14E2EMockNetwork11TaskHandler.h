//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC10JetfuelSDK14E2EMockNetwork11TaskHandler_h
#define _TtCC10JetfuelSDK14E2EMockNetwork11TaskHandler_h
@import Foundation;

@class Swift.Bool, _$s10Foundation4DataVMn ?, _$s10Foundation4DataVMn _$scSg ->, _$sSiSg, _$sSo6NSLockC, _$ss6ResultOMn _$syyt -> _$ss5ErrorMp _$sGcSg, _$ss6ResultOMn _$syyt _$ss5ErrorMp ?, _$syycSg, _TtCs12_SwiftObject;

@interface JetfuelSDK.E2EMockNetwork.TaskHandler : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int? status;
    Swift.Bool fixtureQueueExhausted;
    (() -> ())? onDidFinish;
    Swift.Bool didFinish;
    nominal type descriptor for Foundation.Data _$scSg -> _onData;
    nominal type descriptor for Swift.Result  empty-list () -> protocol descriptor for Swift.Error _$sGcSg _onCompletion;
    Swift.Bool isCancelled;
    __C.NSLock lock;
    nominal type descriptor for Foundation.Data ? bufferedData;
    nominal type descriptor for Swift.Result  empty-list () protocol descriptor for Swift.Error ? bufferedCompletion;
    Swift.Bool didDeliverData;
    Swift.Bool didDeliverCompletion;
}

@end

#endif /* _TtCC10JetfuelSDK14E2EMockNetwork11TaskHandler_h */
