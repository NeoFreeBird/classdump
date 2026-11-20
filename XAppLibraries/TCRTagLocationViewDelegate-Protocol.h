//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRTagLocationViewDelegate_Protocol_h
#define TCRTagLocationViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRTagLocationViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)composeTagLocationViewDidTapGeoButton:(id)button;
- (void)composeTagLocationViewDidTapSearchButton:(id)button;
- (void)composeTagLocationView:(id)view didTapButtonWithPlace:(id)place index:(unsigned long long)index;
- (_Bool)showAdditionalPOISuggestionsForComposeTagLocationView:(id)view;

@end

#endif /* TCRTagLocationViewDelegate_Protocol_h */
