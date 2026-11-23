//
#ifndef TUCButtonData_h
#define TUCButtonData_h
@import Foundation;

#include "TUCDestinationModel.h"

@class NSNumber, NSObject, NSString;

@interface TUCButtonData : NSObject // (Swift)

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSNumber *iconType;
@property (nonatomic, readonly) TUCDestinationModel *destination;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long sizeClass;
@property (nonatomic, readonly) _Bool useDominantColor;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)fileNameForIconType:(long long)type;

/* instance methods */
- (id)initWithDestination:(id)destination iconType:(id)type title:(id)title style:(long long)style sizeClass:(long long)_class useDominantColor:(_Bool)color;
- (id)initWithButtonDictionary:(id)dictionary creationContext:(id)context;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCButtonData_h */
