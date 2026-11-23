//
#ifndef T1VideoExportQualityChoice_h
#define T1VideoExportQualityChoice_h
@import Foundation;

@class NSObject, NSString;

@interface T1VideoExportQualityChoice : NSObject

@property (readonly, nonatomic) long long quality;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) _Bool isMaximumQuality;
@property (readonly, nonatomic) _Bool requiresFullHDEntitlement;
@property (readonly, nonatomic) _Bool requires4KEntitlement;

/* instance methods */
- (id)initWithQuality:(long long)quality title:(id)title isMaximumQuality:(_Bool)quality;

@end

#endif /* T1VideoExportQualityChoice_h */
