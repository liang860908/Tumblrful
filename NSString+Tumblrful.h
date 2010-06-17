/**
 * @file NSString+Tumblrful.h
 * @brief NSString additions
 */

extern NSString * EmptyString;

#define Stringnize(s)	((s) != nil ? (s) : @"")

@interface NSString (Tumblrful)
/**
 * Trim whitespace both-side
 *	@return NSString object
 */
- (NSString *)stringByTrimmingWhitespace;

/**
 * Encode URL
 *	@param[in] encoding encoding
 *	@return NSString object
 */
- (NSString *)stringByURLEncoding:(NSStringEncoding)encoding;

/**
 * strip HTML tags
 *	@param [in] excludes	exclude tags
 *	@example
 *	NSArray * excludes = [NSArray arrayWithObjects: @"table", @"tr", @"td", nil];
 *	NSString * striped = [html stripHTMLTags:excludes];
 */
- (NSString *)stripHTMLTags:(NSArray *)excludes;
@end
