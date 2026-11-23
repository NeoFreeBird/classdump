//
#ifndef TFNBadge_h
#define TFNBadge_h
@import Foundation;

@class NSObject, NSString;

@interface TFNBadge : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 badge;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } standardSize;
@property (nonatomic, readonly) NSString *badgeAccessibilityLabel;
@property (nonatomic, readonly) NSString *badgeAccessibilityHint;
@property (nonatomic, readonly) NSString *badgeAccessibilityIdentifier;
@property (nonatomic, readonly) NSString *imageName;

/* instance methods */
- (id)imageFittingSize:(struct CGSize { double x0; double x1; })size onDark:(_Bool)dark;
- (id)standardSizeImageOnDark:(_Bool)dark;
- (id)init;

@end

#endif /* TFNBadge_h */
