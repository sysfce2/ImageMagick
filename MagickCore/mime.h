/*
  Copyright @ 1999 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.  You may
  obtain a copy of the License at
  
    https://imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  The ImageMagick mime methods.
*/
#ifndef MAGICKCORE_MIME_H
#define MAGICKCORE_MIME_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

typedef struct _MimeInfo
  MimeInfo;

extern MagickExport char
  **GetMimeList(const char *,size_t *,ExceptionInfo *),
  *MagickToMime(const char *);

extern MagickExport const char
  *GetMimeDescription(const MimeInfo *),
  *GetMimeType(const MimeInfo *);

extern MagickExport MagickBooleanType
  ListMimeInfo(FILE *,ExceptionInfo *),
  LoadMimeLists(const char *,ExceptionInfo *);

extern MagickExport const MimeInfo
  *GetMimeInfo(const char *,const unsigned char *,const size_t,ExceptionInfo *),
  **GetMimeInfoList(const char *,size_t *,ExceptionInfo *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
