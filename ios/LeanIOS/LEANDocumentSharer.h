//
//  LEANDocumentSharer.h
//  GoNativeIOS
//
//  Created by Weiyin He on 8/26/14.
//  Copyright (c) 2014 GoNative.io LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LEANDocumentSharer : NSObject
+ (LEANDocumentSharer*)sharedSharer;
- (void)downloadImage:(NSURL*)url completion:(void (^)(NSDictionary *result))completion;
- (BOOL)isSharableRequest:(NSURLRequest*)req;
- (void)shareRequest:(NSURLRequest *)req fromButton:(UIBarButtonItem*) button;
- (void)shareUrl:(NSURL*)url fromView:(UIView*)view;
- (void)shareUrl:(NSURL*)url fromView:(UIView*)view filename:(NSString*)filename;
- (void)shareUrl:(NSURL*)url fromView:(UIView*)view filename:(NSString*)filename open:(BOOL)open completion:(void (^)( NSString *error))completion;
- (void)shareDataUrl:(NSURL*)url;
- (void)receivedRequest:(NSURLRequest*)request;
- (void)receivedResponse:(NSURLResponse*)response;
- (void)receivedWebviewResponse:(NSURLResponse*)response;
- (void)receivedData:(NSData*)data;
- (void)cancel;
- (void)finish;
@end
