//
#ifndef _TtC40TwitterClientEventServicesImplementation17ClientEventScribe_h
#define _TtC40TwitterClientEventServicesImplementation17ClientEventScribe_h
@import Foundation;

@class DispatchQueue, TwitterClientEventServices.ClientEventAccountIDProviding, TwitterClientEventServices.ClientEventBackgroundTask, _$sSayypG, _$sSo30TFSScribeOutgoingEventsHandler_pSg, _$sSo9TFSScribeC, _TtCs12_SwiftObject;

@interface TwitterClientEventServicesImplementation.ClientEventScribe : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Any] cancellables;
    __C.TFSScribe scribe;
    TwitterClientEventServices.ClientEventAccountIDProviding accountProviding;
    TwitterClientEventServices.ClientEventBackgroundTask backgroundTask;
    __C.TFSScribeOutgoingEventsHandler? outgoingEventsHandler;
    DispatchQueue scribingQueue;
}

@end

#endif /* _TtC40TwitterClientEventServicesImplementation17ClientEventScribe_h */
