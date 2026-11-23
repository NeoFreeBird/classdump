//
#ifndef _TtC8TFSModel27ModelServiceModelContextMap_h
#define _TtC8TFSModel27ModelServiceModelContextMap_h
@import Foundation;

@class Swift.Bool, TFSModel.ModelContext.Configuration _$sSSc, TFSModel.ModelContextErrorLogger ?, TFSModel.ModelRegistry, XUtilities.UnfairQueue, _TtCs12_SwiftObject;

@interface TFSModel.ModelServiceModelContextMap : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.ModelContext.Configuration _$sSSc contextConfigurationForAccountID;
    TFSModel.ModelRegistry modelRegistry;
    Swift.Dictionary empty-list Swift.String TFSModel.ModelContext function type (escaping) accountModelContextMap;
    XUtilities.UnfairQueue accountModelContextMapQueue;
    TFSModel.ModelContextErrorLogger ? errorLogger;
    Swift.Bool dependencyGraphLoggingEnabled;
}

@end

#endif /* _TtC8TFSModel27ModelServiceModelContextMap_h */
