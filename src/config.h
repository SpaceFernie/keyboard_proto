/******************************************************************************
 * @file    module.h
 * @brief   A brief description of the module.
 * @details A more detailed description of the module.
 * @author  Author
 * @version 1.0.0
 * @date    20XX-XX-XX
 * @note
 *
 * @copyright MIT License
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *****************************************************************************/

/******************************************************************************
 * REVISION HISTORY
 *
 * Date         Version     Author          Description
 * 20XX-XX-XX   1.0.0       Author          Initial release.
 *
 *****************************************************************************/

/** @todo Update name below as well as comment for corresponding endif **/
#ifndef PROJECT_MODULE_H_
#define PROJECT_MODULE_H_

/*** INCLUDES ****************************************************************/
#include <stdint.h> /* Required for portable types. */

/*** PREPROCESSOR CONSTANTS **************************************************/
/* clang-format off */
#define FIRMWARE_VERSION_MAJOR @keyboard-proto_VERSION_MAJOR@
#define FIRMWARE_VERSION_MINOR @keyboard-proto_VERSION_MINOR@
#define FIRMWARE_VERSION_PATCH @keyboard-proto_VERSION_PATCH@
/* clang-format on */

/*** CONFIGURATION CONSTANTS *************************************************/

/*** MACROS ******************************************************************/

/*** TYPEDEFS ****************************************************************/

/*** PROTOTYPES **************************************************************/
#ifdef __cplusplus
extern "C" {
#endif

/** @todo: Add function prototypes **/

#ifdef __cplusplus
}  // extern "C"
#endif

#endif /* PROJECT_MODULE_H_ */
