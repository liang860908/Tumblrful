/**
 * @file LinkDeliverer.h
 * @brief LinkDeliverer declaration
 * @author Masayuki YAMAYA
 * @date 2008-03-03
 */
#import "DelivererBase.h"

@interface LinkDeliverer : DelivererBase
{
	NSDictionary* clickedElement_;
}
+ (id<Deliverer>) create:(DOMHTMLDocument*)document element:(NSDictionary*)clickedElement;
- (id) initWithDocument:(DOMHTMLDocument*)document element:(NSDictionary*)clickedElement;
- (void) dealloc;
- (NSString*) postType;
- (NSString*) titleForMenuItem;
- (void) action:(id)sender;
@end
