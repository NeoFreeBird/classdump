//
#ifndef TTSSearchFiltersViewControllerContext_Protocol_h
#define TTSSearchFiltersViewControllerContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSSearchFiltersViewControllerContext <NSObject>

@required

/* required instance methods */
- (void)requestAuthorizationForGeolocationWithCallback:(id /* block */)callback;
- (void)requestAuthorizationForGeolocationWithCallback:(id /* block */)callback;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (id)scribe;
- (id)accessibilityIdentifier;
- (_Bool)filterByPeopleEnabled;

@optional

@end

#endif /* TTSSearchFiltersViewControllerContext_Protocol_h */
