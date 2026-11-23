//
#ifndef T1SearchFiltersViewControllerContext_h
#define T1SearchFiltersViewControllerContext_h
@import Foundation;

#include "T1SearchFeatures.h"
#include "TTSSearchFiltersViewControllerContext-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount;

@interface T1SearchFiltersViewControllerContext : NSObject <TTSSearchFiltersViewControllerContext>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1SearchFeatures *searchFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)requestAuthorizationForGeolocationWithCallback:(id /* block */)callback;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (id)accessibilityIdentifier;
- (id)scribe;
- (_Bool)filterByPeopleEnabled;

@end

#endif /* T1SearchFiltersViewControllerContext_h */
