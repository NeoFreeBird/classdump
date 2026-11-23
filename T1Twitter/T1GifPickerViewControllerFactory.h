//
#ifndef T1GifPickerViewControllerFactory_h
#define T1GifPickerViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1GifPickerViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)buildWithAccount:(id)account composition:(id)composition didSelectAttachment:(id /* block */)attachment;
+ (void)removeRecentsForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* T1GifPickerViewControllerFactory_h */
