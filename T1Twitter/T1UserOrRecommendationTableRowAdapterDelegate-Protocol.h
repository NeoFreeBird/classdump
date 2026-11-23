//
#ifndef T1UserOrRecommendationTableRowAdapterDelegate_Protocol_h
#define T1UserOrRecommendationTableRowAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UserOrRecommendationTableRowAdapterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)userRowAdapter:(id)adapter didPerformAction:(unsigned long long)action forItem:(id)item withOptions:(id)options success:(_Bool)success error:(id)error;
- (void)userRowAdapter:(id)adapter didPerformAction:(unsigned long long)action forItem:(id)item withOptions:(id)options success:(_Bool)success error:(id)error;
- (_Bool)userRowAdapter:(id)adapter shouldShowBioForUserReference:(id)reference;
- (_Bool)userRowAdapter:(id)adapter shouldShowBioForUserReference:(id)reference;
- (id)userRowAdapter:(id)adapter actionControlProviderForDataViewController:(id)controller item:(id)item options:(id)options indexPath:(id)path;
- (id)userRowAdapter:(id)adapter actionControlProviderForDataViewController:(id)controller item:(id)item options:(id)options indexPath:(id)path;

@end

#endif /* T1UserOrRecommendationTableRowAdapterDelegate_Protocol_h */
