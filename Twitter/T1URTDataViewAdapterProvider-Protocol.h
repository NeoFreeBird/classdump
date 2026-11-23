//
#ifndef T1URTDataViewAdapterProvider_Protocol_h
#define T1URTDataViewAdapterProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1URTDataViewAdapterProvider <NSObject>

@required

@optional

/* optional instance methods */
- (id)userDataViewAdapterForItemsOfClasses:(id)classes account:(id)account scribeImpressionCache:(id)cache cellStyle:(long long)style didSelectUserBlock:(id /* block */)block followActionBlock:(id /* block */)block caretTapBlock:(id /* block */)block caretTypeBlock:(id /* block */)block delegate:(id)delegate;
- (id)messageEntryDataViewAdapterForItemsOfClasses:(id)classes account:(id)account scribe:(id)scribe scribeContext:(id)context scribeImpressionCache:(id)cache impressionLogger:(id)logger navigationHelper:(id)helper delegate:(id)delegate;

@end

#endif /* T1URTDataViewAdapterProvider_Protocol_h */
