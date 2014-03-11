// AFOAuth2RequestSerializer.h
//
// Copyright (c) 2014 Mattt Thompson (http://mattt.me/)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "AFURLRequestSerialization.h"
#import "AFOAuth2Client.h"

@interface AFOAuth2RequestSerializer : AFHTTPRequestSerializer

@property (nonatomic, strong) AFOAuthCredential *credential;

/**
 Creates and returns a serializer with default configuration and sets the authorization header with the specified credential.
 */
+ (AFOAuth2RequestSerializer *)serializerWithCredential:(AFOAuthCredential *)credential;

/**
 Sets the "Authorization" HTTP header set in request objects made by the HTTP client to the access token of the specified OAuth credential. This overwrites any existing value for this header.
 
 @param credentiai The OAuth credential
 */
- (void)setAuthorizationHeaderFieldWithCredential:(AFOAuthCredential *)credential;

@end
