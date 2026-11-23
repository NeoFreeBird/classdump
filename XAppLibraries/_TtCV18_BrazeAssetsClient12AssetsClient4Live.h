//
#ifndef _TtCV18_BrazeAssetsClient12AssetsClient4Live_h
#define _TtCV18_BrazeAssetsClient12AssetsClient4Live_h
@import Foundation;

@class DispatchQueue, _$sSD -> _BrazeAssetsClient.AssetsClient.Live.TaskKey _$sSo20NSURLSessionDataTaskC4task_SD _$s10Foundation4UUIDVMn _$ss6ResultOMn _$s10Foundation4DataVMn _$s_So13NSURLResponseCt _$ss5ErrorMp _$sGcG8metadatat ->, _$sSo12NSURLSessionC, _$sSo15NSRecursiveLockC, _TtCs12_SwiftObject;

@interface _BrazeAssetsClient.AssetsClient.Live : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Dictionary -> _BrazeAssetsClient.AssetsClient.Live.TaskKey __C.NSURLSessionDataTasktask first-element-marker Swift.Dictionary nominal type descriptor for Foundation.UUID nominal type descriptor for Swift.Result nominal type descriptor for Foundation.Data _$s_So13NSURLResponseCt protocol descriptor for Swift.Error _$sGcG8metadatat -> inFlight;
    __C.NSRecursiveLock lock;
    __C.NSURLSession session;
    DispatchQueue resultQueue;
}

@end

#endif /* _TtCV18_BrazeAssetsClient12AssetsClient4Live_h */
