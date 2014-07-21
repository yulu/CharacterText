//
//  FKFlickrPhotosPeopleDeleteCoords.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosPeopleDeleteCoordsError_PersonNotFound = 1,		 /* The NSID passed was not a valid user id. */
	FKFlickrPhotosPeopleDeleteCoordsError_PhotoNotFound = 2,		 /* The photo id passed was not a valid photo id. */
	FKFlickrPhotosPeopleDeleteCoordsError_UserCannotEditThatPersonInThatPhoto = 3,		 /* The calling user is neither the person depicted in the photo nor the person who added the bounding box. */
	FKFlickrPhotosPeopleDeleteCoordsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosPeopleDeleteCoordsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosPeopleDeleteCoordsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosPeopleDeleteCoordsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosPeopleDeleteCoordsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosPeopleDeleteCoordsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosPeopleDeleteCoordsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosPeopleDeleteCoordsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosPeopleDeleteCoordsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosPeopleDeleteCoordsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosPeopleDeleteCoordsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosPeopleDeleteCoordsError;

/*

Remove the bounding box from a person in a photo




*/
@interface FKFlickrPhotosPeopleDeleteCoords : NSObject <FKFlickrAPIMethod>

/* The id of the photo to edit a person in. */
@property (nonatomic, strong) NSString *photo_id; /* (Required) */

/* The NSID of the person whose bounding box you want to remove. */
@property (nonatomic, strong) NSString *user_id; /* (Required) */


@end