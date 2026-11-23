//
#ifndef _TtC10JetfuelSDK14E2ETraceLogger_h
#define _TtC10JetfuelSDK14E2ETraceLogger_h
@import Foundation;

@class DispatchQueue, JetfuelSDK.E2ENetworkMode ?, Swift.Bool, _$s10Foundation3URLVMn ?, _$sSSSg, _$sSo22NSISO8601DateFormatterC, _TtCs12_SwiftObject;

@interface JetfuelSDK.E2ETraceLogger : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DispatchQueue queue;
    nominal type descriptor for Foundation.URL ? logFileURL;
    Swift.Bool isEnabled;
    JetfuelSDK.E2ENetworkMode ? currentMode;
    Swift.String? currentFlowName;
    __C.NSISO8601DateFormatter dateFormatter;
}

@end

#endif /* _TtC10JetfuelSDK14E2ETraceLogger_h */
